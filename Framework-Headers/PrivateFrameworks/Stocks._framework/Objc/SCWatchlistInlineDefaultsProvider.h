//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCWatchlistDefaultsProviding-Protocol.h>

@class SCWatchlistDefaults;

@interface SCWatchlistInlineDefaultsProvider : NSObject <SCWatchlistDefaultsProviding>
{
    SCWatchlistDefaults *_defaults;
}

- (void).cxx_destruct;
- (void)fetchWatchlistDefaultsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDefaults:(id)arg1;

@end

