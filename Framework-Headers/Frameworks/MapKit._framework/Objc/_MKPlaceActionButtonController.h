//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKPlaceCardHeaderViewController, NSString;

@interface _MKPlaceActionButtonController : NSObject
{
    MKPlaceCardHeaderViewController *_headerViewController;
    NSString *_buttonTitle;
    NSString *_buttonSubTitle;
    CDUnknownBlockType _buttonSelectedBlock;
}

@property (readonly, nonatomic) CDUnknownBlockType buttonSelectedBlock; // @synthesize buttonSelectedBlock=_buttonSelectedBlock;
@property (readonly, nonatomic) NSString *buttonSubTitle; // @synthesize buttonSubTitle=_buttonSubTitle;
@property (readonly, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (weak, nonatomic) MKPlaceCardHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)buttonTextChanged;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;

@end
