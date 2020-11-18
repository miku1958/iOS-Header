//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PSIObject : NSObject <NSCopying>
{
    NSMutableDictionary *_synonymsByOriginalWord;
    NSString *_uuid;
    NSArray *_tokens;
}

@property (readonly, strong, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property (copy, nonatomic, setter=setUUID:) NSString *uuid; // @synthesize uuid=_uuid;

- (id)_initForCopy:(BOOL)arg1;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;
- (void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initForReverse;
- (id)initWithUUID:(id)arg1;
- (void)reverse;

@end

