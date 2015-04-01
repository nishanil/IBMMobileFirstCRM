/*
 *  Licensed Materials - Property of IBM
 *  5725-I43 (C) Copyright IBM Corp. 2011, 2013. All Rights Reserved.
 *  US Government Users Restricted Rights - Use, duplication or
 *  disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

//
//  WLNotificationListener.h
//  WorklightStaticLibProject
//
//  Created by worklightdev on 24/01/13.
//  Copyright (c) 2013 odedr@worklight.com. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * A protocol that defines the method that receives the notification message.
 */
@protocol WLNotificationListener <NSObject>

/**
 * This method is called when the notification arrives from a subscribed tag.
 * props - A JSON block that contains the notifications properties of the platform
 * payload - A JSON block that contains other data that is sent from the Worklight Server
 */
-(void)onReceive:(NSString *)props :(NSString *)payload;

@end
