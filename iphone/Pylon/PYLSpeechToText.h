//
//  PYLSpeechToText.h
//  Pylon
//
//  Created by Scott Greenlay on 2012-11-29.
//  Copyright (c) 2012 Waterloo Hackathon Team. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PYLSpeechToText : NSObject

+ (void)convertSpeechToText:(NSString *)path andProcessTextWithBlock:(void (^)(NSString *, NSError * error))block;

@end
