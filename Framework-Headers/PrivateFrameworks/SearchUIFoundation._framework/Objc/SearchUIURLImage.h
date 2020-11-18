//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUIFoundation/SearchUISFImage.h>

@class NSURL;

@interface SearchUIURLImage : SearchUISFImage
{
    NSURL *_url;
}

@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)prepare;

@end

