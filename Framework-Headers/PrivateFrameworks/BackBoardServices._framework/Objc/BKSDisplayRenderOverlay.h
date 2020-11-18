//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSDisplayRenderOverlayDescribing-Protocol.h>
#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor, CADisplay, NSString;

@interface BKSDisplayRenderOverlay : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDescribing>
{
    BKSDisplayRenderOverlayDescriptor *_descriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic, getter=_descriptor) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly, strong, nonatomic) CADisplay *display;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) BOOL lockBacklight;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) Class superclass;

+ (void)dismissAllOverlays;
+ (id)existingOverlayForDisplay:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismiss;
- (void)dismissWithAnimation:(id)arg1;
- (void)freeze;
- (id)initWithDescriptor:(id)arg1;
- (void)present;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

