//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPersistentHistoryTransactionModifiers : NSObject
{
    BOOL _syncChangeMarker;
    int _changeSource;
}

@property (nonatomic) int changeSource; // @synthesize changeSource=_changeSource;
@property (readonly, nonatomic) BOOL isSyncable;
@property (nonatomic) BOOL syncChangeMarker; // @synthesize syncChangeMarker=_syncChangeMarker;

+ (id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2;
+ (id)transactionModifiersFromTransactionAuthor:(id)arg1;
- (id)_descriptionWithBuilder:(id)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)description;
- (id)encodeAsTransactionAuthor;
- (id)init;
- (id)initWithChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2;
- (BOOL)updateFromTransactionAuthor:(id)arg1;

@end
