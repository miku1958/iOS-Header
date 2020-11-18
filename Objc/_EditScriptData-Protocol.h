//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol _EditScriptData;

@protocol _EditScriptData <NSObject>
+ (id<_EditScriptData>)EditScriptDataWithArray:(NSArray *)arg1;
+ (id<_EditScriptData>)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)indexOfFirstDifferenceWithOtherData:(id<_EditScriptData>)arg1 shouldReverseIterate:(BOOL)arg2;
- (long long)length;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringAtIndex:(long long)arg1;
- (NSString *)stringValue;
@end
