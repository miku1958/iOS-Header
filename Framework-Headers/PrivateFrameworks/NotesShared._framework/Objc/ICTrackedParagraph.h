//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject
{
    TTParagraphStyle *_paragraph;
    struct _NSRange _characterRange;
}

@property (nonatomic) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property (strong, nonatomic) TTParagraphStyle *paragraph; // @synthesize paragraph=_paragraph;

- (void).cxx_destruct;
- (id)description;

@end

