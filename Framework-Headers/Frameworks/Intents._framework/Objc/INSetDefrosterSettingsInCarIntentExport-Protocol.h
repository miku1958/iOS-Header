//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INSetDefrosterSettingsInCarIntentExport <NSObject, JSExport>

@property (copy, nonatomic) INSpeakableString *carName;
@property (nonatomic) long long defroster;
@property (copy, nonatomic) NSNumber *enable;

- (id)init;
@end
