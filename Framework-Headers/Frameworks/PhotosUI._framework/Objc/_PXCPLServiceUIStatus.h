//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLServiceUIStatus-Protocol.h>

@class NSString;

@interface _PXCPLServiceUIStatus : NSObject <PXCPLServiceUIStatus>
{
    BOOL _paused;
    float _progress;
    NSString *_referencedItemsDescription;
    NSString *_stateDescription;
    NSString *_failureDescription;
    CDUnknownBlockType _action;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertSubtitle;
    NSString *_actionConfirmationAlertButtonTitle;
    long long _serviceAction;
}

@property (copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property (strong, nonatomic) NSString *actionConfirmationAlertButtonTitle; // @synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle;
@property (strong, nonatomic) NSString *actionConfirmationAlertSubtitle; // @synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle;
@property (strong, nonatomic) NSString *actionConfirmationAlertTitle; // @synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle;
@property (strong, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *failureDescription; // @synthesize failureDescription=_failureDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) float progress; // @synthesize progress=_progress;
@property (strong, nonatomic) NSString *referencedItemsDescription; // @synthesize referencedItemsDescription=_referencedItemsDescription;
@property (nonatomic) long long serviceAction; // @synthesize serviceAction=_serviceAction;
@property (strong, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isEqualToCPLServiceUIStatus:(id)arg1 onlyProgressIsNotEqual:(BOOL *)arg2;
- (id)init;

@end

