//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation
{
    NSString *_badgeValue;
    NSString *_bundleIdentifier;
}

@property (strong) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property (strong) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

- (void).cxx_destruct;
- (void)run;
- (id)uniqueKey;

@end

