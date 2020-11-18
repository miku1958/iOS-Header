//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipPolicy-Protocol.h>

@class NSString;
@protocol SVContentTransitionTypeProviding;

@interface SVPlaylistSkipPolicyHandler : NSObject <SVVideoSkipPolicy>
{
    id<SVContentTransitionTypeProviding> _contentTransitionTypeProvider;
}

@property (readonly, nonatomic) BOOL canSkip;
@property (readonly, nonatomic) id<SVContentTransitionTypeProviding> contentTransitionTypeProvider; // @synthesize contentTransitionTypeProvider=_contentTransitionTypeProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContentTransitionTypeProvider:(id)arg1;

@end

