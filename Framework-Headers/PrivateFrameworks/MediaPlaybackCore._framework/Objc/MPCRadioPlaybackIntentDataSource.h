//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackIntentDataSource-Protocol.h>

@class NSString;

@interface MPCRadioPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)getPlaybackContextForIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

