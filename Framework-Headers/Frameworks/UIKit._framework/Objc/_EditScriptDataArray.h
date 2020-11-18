//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_EditScriptData-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptDataArray : NSObject <_EditScriptData>
{
    NSArray *_data;
    NSString *_cachedStringValue;
}

@property (strong, nonatomic) NSString *cachedStringValue; // @synthesize cachedStringValue=_cachedStringValue;
@property (strong, nonatomic) NSArray *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
- (long long)characterIndexForItem:(long long)arg1;
- (void)dealloc;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;
- (long long)length;
- (long long)lengthOfItem:(long long)arg1;
- (id)stringAtIndex:(long long)arg1;
- (id)stringValue;

@end

