package com.example.android.myagoraapplication;

import android.content.Intent;
import android.telecom.Connection;
import android.telecom.DisconnectCause;
import android.util.Log;


/**
 * Handles the Calling Connection.
 */
public final class AgoraConnection extends Connection {
    private static final String TAG = AgoraConnection.class.getSimpleName();
    private String account;
    private String channel;
    private String subscriber;
    private int type;

    public AgoraConnection(String accountName, String channelName, String subscriberName, int connectionType) {
        account = accountName;
        channel = channelName;
        subscriber = subscriberName;
        type = connectionType;

        if(type == Constant.CALL_OUT) {
            // indicate the Connection originated from a self-managed ConnectionService
            setConnectionCapabilities(PROPERTY_SELF_MANAGED);
        }
    }

    @Override
    public void onDisconnect() {
        Log.i(TAG, "onDisconnect: called.");

        setDisconnected(new DisconnectCause(DisconnectCause.LOCAL));
        destroy();
    }

    @Override
    public void onAbort() {
        Log.i(TAG, "onAbort: called.");

        setDisconnected(new DisconnectCause(DisconnectCause.ERROR));
        destroy();
    }

}
