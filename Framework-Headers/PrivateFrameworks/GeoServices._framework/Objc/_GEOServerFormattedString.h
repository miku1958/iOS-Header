//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOServerFormattedString-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOServerFormattedString : NSObject <GEOServerFormattedString>
{
    NSString *_formatString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSArray *formatTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

