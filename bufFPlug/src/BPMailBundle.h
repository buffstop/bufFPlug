//
//  BPMailBundle.m
//  bufFPlug
//
//  Created by Andreas Buff on 07.12.20.
//

#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BPMailBundle : NSObject

@end

#pragma mark - Singleton

@interface BPMailBundle (NoImplementation)
// Prevent "incomplete implementation" warning.
+ (id)sharedInstance;
@end

NS_ASSUME_NONNULL_END
