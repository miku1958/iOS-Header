//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/VOSSoundPack-Protocol.h>

@class NSDictionary, NSString;

@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventToSoundFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)soundAssetURLForOutputEvent:(id)arg1;

@end
