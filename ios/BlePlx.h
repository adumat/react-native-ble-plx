//
//  BleClient.h
//  BleClient
//
//  Created by Przemysław Lenart on 27/07/16.
//  Copyright © 2016 Polidea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface BlePlx : RCTEventEmitter <RCTBridgeModule>

- (void) monitorCharacteristicForDeviceBypassingRN: (NSString*)deviceIdentifier
                                       serviceUUID: (NSString*)serviceUUID
                                characteristicUUID: (NSString*)characteristicUUID
                                     transactionID: (NSString*)transactionId
                                           onValue: (void(^)(NSDictionary* _Nonnull, NSString* _Nonnull))onValue
                                           onError: (void(^)(NSString* _Nonnull, NSString* _Nonnull))onError;

@end
