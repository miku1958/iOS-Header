//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INSetCarLockStatusIntentExport <NSObject, JSExport>

@property (copy, nonatomic) INSpeakableString *carName;
@property (copy, nonatomic) NSNumber *locked;

- (id)init;
@end
