//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;
@protocol _SFBrowserDocument;

@interface SFBrowserDocumentTrackerInfo : NSObject
{
    BOOL _cachedTrackingPreventionEnabled;
    NSDate *_lastNavigationCommitDate;
    id<_SFBrowserDocument> _document;
    NSSet *_allowedKnownTrackingThirdParties;
    NSSet *_preventedKnownTrackingThirdParties;
}

@property (readonly, nonatomic) NSSet *allowedKnownTrackingThirdParties; // @synthesize allowedKnownTrackingThirdParties=_allowedKnownTrackingThirdParties;
@property (readonly, weak, nonatomic) id<_SFBrowserDocument> document; // @synthesize document=_document;
@property (readonly, nonatomic) NSSet *preventedKnownTrackingThirdParties; // @synthesize preventedKnownTrackingThirdParties=_preventedKnownTrackingThirdParties;

+ (BOOL)trackingPreventionEnabled;
- (void).cxx_destruct;
- (void)_flushKnownTrackingThirdParties;
- (void)_resetKnownTrackingThirdParties;
- (void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)documentDidCommitNavigation;
- (id)initWithDocument:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateKnownTrackingThirdPartiesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
