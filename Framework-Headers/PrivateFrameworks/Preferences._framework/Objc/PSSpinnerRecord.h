//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UINavigationItem;

@interface PSSpinnerRecord : NSObject
{
    BOOL _hidesBackButton;
    NSArray *_rightItems;
    NSArray *_leftItems;
    UINavigationItem *_navigationItem;
}

@property (nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property (copy, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
@property (strong, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property (copy, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;

- (void).cxx_destruct;

@end
