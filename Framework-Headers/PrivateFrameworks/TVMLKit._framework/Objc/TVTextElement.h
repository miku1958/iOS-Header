//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewElement.h>

@class NSAttributedString;

@interface TVTextElement : TVViewElement
{
}

@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) long long textStyle;

- (id)attributedStringWithFont:(id)arg1;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;

@end
