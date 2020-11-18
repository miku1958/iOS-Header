//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class NSString;
@protocol _MKPlaceActionButtonControllerProtocol;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate>
{
    int _analyticsAction;
    NSString *_buttonTitle;
    NSString *_buttonSubTitle;
    CDUnknownBlockType _buttonSelectedBlock;
    id<_MKPlaceActionButtonControllerProtocol> _delegate;
}

@property (readonly, nonatomic) int analyticsAction; // @synthesize analyticsAction=_analyticsAction;
@property (readonly, nonatomic) CDUnknownBlockType buttonSelectedBlock; // @synthesize buttonSelectedBlock=_buttonSelectedBlock;
@property (readonly, nonatomic) NSString *buttonSubTitle; // @synthesize buttonSubTitle=_buttonSubTitle;
@property (readonly, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_MKPlaceActionButtonControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)buttonTextChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;

@end
