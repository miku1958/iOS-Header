//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorCaptionsResults : NSObject
{
    BOOL _remoteCanDisplayCaptions;
    NSSet *_localLanguages;
    NSSet *_remoteLanguages;
}

@property (strong, nonatomic) NSSet *localLanguages; // @synthesize localLanguages=_localLanguages;
@property (nonatomic) BOOL remoteCanDisplayCaptions; // @synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions;
@property (strong, nonatomic) NSSet *remoteLanguages; // @synthesize remoteLanguages=_remoteLanguages;

- (void)dealloc;

@end

