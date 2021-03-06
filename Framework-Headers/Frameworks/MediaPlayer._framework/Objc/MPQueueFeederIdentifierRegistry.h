//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSMapTable, NSMutableArray;

@interface MPQueueFeederIdentifierRegistry : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableArray *_identifiers;
    NSMutableArray *_identifierSets;
    NSMapTable *_index;
}

@property (readonly, nonatomic) long long count;
@property (strong, nonatomic) NSMutableArray *identifierSets; // @synthesize identifierSets=_identifierSets;
@property (strong, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
@property (strong, nonatomic) NSMapTable *index; // @synthesize index=_index;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyChanges:(id)arg1 identifierSetLookupBlock:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierSetAtIndex:(long long)arg1;
- (id)identifierSetForItem:(id)arg1;
- (long long)indexForItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (id)itemForIdentifierSet:(id)arg1;
- (void)replaceItemAndIdentifierSet:(id)arg1 atIndex:(long long)arg2;

@end

