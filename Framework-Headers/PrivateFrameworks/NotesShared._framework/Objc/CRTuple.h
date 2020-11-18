//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>

@class NSArray, NSString;

@interface CRTuple : NSObject <CRDataType, CRCoding>
{
    NSArray *_contents;
}

@property (strong, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tupleWithArray:(id)arg1;
- (void).cxx_destruct;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(CDUnknownBlockType)arg1;

@end
