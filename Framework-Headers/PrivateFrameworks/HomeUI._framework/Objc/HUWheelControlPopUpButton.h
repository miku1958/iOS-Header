//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSArray, NSFormatter, NSString;
@protocol HUControlViewDelegate;

@interface HUWheelControlPopUpButton : UIButton <HUControlView>
{
    NSString *_identifier;
    id<HUControlViewDelegate> _delegate;
    id _value;
    NSArray *_values;
    NSFormatter *_valueFormatter;
}

@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;
@property (strong, nonatomic) id value; // @synthesize value=_value;
@property (strong, nonatomic) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property (strong, nonatomic) NSArray *values; // @synthesize values=_values;

+ (Class)valueClass;
- (void).cxx_destruct;
- (id)_createMenu;

@end
