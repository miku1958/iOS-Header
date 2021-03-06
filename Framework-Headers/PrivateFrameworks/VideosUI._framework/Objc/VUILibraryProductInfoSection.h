//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface VUILibraryProductInfoSection : NSObject
{
    NSString *_groupName;
    UIView *_headerContentView;
    NSArray *_dataViews;
    double _lineSpacing;
    long long _layoutType;
    struct UIEdgeInsets _headerPadding;
}

@property (copy, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property (copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (strong, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property (readonly, nonatomic) struct UIEdgeInsets headerMargin;
@property (nonatomic) struct UIEdgeInsets headerPadding; // @synthesize headerPadding=_headerPadding;
@property (nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property (nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;

+ (id)dataViewWithString:(id)arg1;
+ (id)headerViewWithString:(id)arg1;
- (void).cxx_destruct;

@end

