//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeyboardServices/_KSFileEntry.h>

#import <KeyboardServices/NSFastEnumeration-Protocol.h>
#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface _KSFileDirectory : _KSFileEntry <NSSecureCoding, NSFastEnumeration>
{
    NSMutableDictionary *_contents;
}

@property (readonly, strong, nonatomic) NSArray *contents;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (void)consistencyCheck;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entryForName:(id)arg1;
- (id)findEntryWithComparison:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirectory:(id)arg1 captureContents:(BOOL)arg2 storeRoot:(BOOL)arg3;
- (id)initWithName:(id)arg1;
- (void)performOnEverything:(CDUnknownBlockType)arg1;
- (void)removeEntryWithName:(id)arg1;
- (void)restoreToPath:(id)arg1;

@end
