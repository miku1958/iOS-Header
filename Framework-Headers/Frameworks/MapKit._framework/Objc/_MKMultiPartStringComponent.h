//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartStringComponent : NSObject
{
    NSAttributedString *_attributedString;
    struct _NSRange _originalRange;
    struct _NSRange _range;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (readonly, nonatomic) struct _NSRange originalRange; // @synthesize originalRange=_originalRange;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end
