//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OKSettingsTransactionItem : NSObject
{
    CDUnknownBlockType _updateBlock;
    NSString *key;
    NSString *_key;
}

@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;

- (void)dealloc;
- (id)init;

@end

