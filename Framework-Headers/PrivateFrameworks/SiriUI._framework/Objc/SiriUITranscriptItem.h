//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AceObject, NSUUID, UIViewController;
@protocol SiriUIViewController;

@interface SiriUITranscriptItem : NSObject
{
    BOOL _restored;
    BOOL _snippetViewControllerHasBeenUnloaded;
    NSUUID *_itemIdentifier;
    UIViewController<SiriUIViewController> *_viewController;
    AceObject *_aceObject;
    struct CGRect _previousFrame;
}

@property (strong, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property (copy, nonatomic) NSUUID *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property (nonatomic, getter=isRestored) BOOL restored; // @synthesize restored=_restored;
@property (nonatomic) BOOL snippetViewControllerHasBeenUnloaded; // @synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded;
@property (strong, nonatomic) UIViewController<SiriUIViewController> *viewController; // @synthesize viewController=_viewController;

+ (id)transcriptItemWithAceObject:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAceObject:(id)arg1;

@end

