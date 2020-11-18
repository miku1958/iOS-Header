//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MCItemDetail : NSObject
{
    BOOL _showCheckmarkView;
    BOOL _showCheckmark;
    NSString *_detailTitle;
    NSString *_detail;
    UIColor *_detailHighlightColor;
    NSString *_checkmarkText;
    UIColor *_checkmarkHighlightColor;
}

@property (strong, nonatomic) UIColor *checkmarkHighlightColor; // @synthesize checkmarkHighlightColor=_checkmarkHighlightColor;
@property (strong, nonatomic) NSString *checkmarkText; // @synthesize checkmarkText=_checkmarkText;
@property (strong, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property (strong, nonatomic) UIColor *detailHighlightColor; // @synthesize detailHighlightColor=_detailHighlightColor;
@property (strong, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property (nonatomic) BOOL showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property (nonatomic) BOOL showCheckmarkView; // @synthesize showCheckmarkView=_showCheckmarkView;

+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7;
- (void).cxx_destruct;
- (id)initWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7;

@end

