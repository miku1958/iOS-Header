//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ECMIMECharset;

@interface ECHTMLStringAndMIMECharset : NSObject
{
    NSString *_string;
    id<ECMIMECharset> _charset;
}

@property (readonly, nonatomic) id<ECMIMECharset> charset; // @synthesize charset=_charset;
@property (readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 charset:(id)arg2;

@end

