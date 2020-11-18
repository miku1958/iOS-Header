//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUViewControllerSpecChange : NSObject
{
    BOOL _traitCollectionChanged;
    BOOL _layoutReferenceSizeChanged;
    BOOL _layoutStyleChanged;
    BOOL _presentedForSecondScreenChanged;
    BOOL _secondScreenSizeChanged;
    BOOL _prefersCompactLayoutForSplitScreenChanged;
}

@property (readonly, nonatomic) BOOL changed;
@property (nonatomic) BOOL layoutReferenceSizeChanged; // @synthesize layoutReferenceSizeChanged=_layoutReferenceSizeChanged;
@property (nonatomic) BOOL layoutStyleChanged; // @synthesize layoutStyleChanged=_layoutStyleChanged;
@property (nonatomic) BOOL prefersCompactLayoutForSplitScreenChanged; // @synthesize prefersCompactLayoutForSplitScreenChanged=_prefersCompactLayoutForSplitScreenChanged;
@property (nonatomic) BOOL presentedForSecondScreenChanged; // @synthesize presentedForSecondScreenChanged=_presentedForSecondScreenChanged;
@property (nonatomic) BOOL secondScreenSizeChanged; // @synthesize secondScreenSizeChanged=_secondScreenSizeChanged;
@property (nonatomic) BOOL traitCollectionChanged; // @synthesize traitCollectionChanged=_traitCollectionChanged;


@end
