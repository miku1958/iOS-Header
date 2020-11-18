//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCEUidTract : NSObject <NSCopying>
{
    vector_4dc5f307 _columnUids;
    vector_4dc5f307 _rowUids;
    BOOL _isRangeRef;
    unsigned char _purpose;
}

@property (readonly) vector_4dc5f307 *columnUids; // @synthesize columnUids=_columnUids;
@property (nonatomic) BOOL isRangeRef; // @synthesize isRangeRef=_isRangeRef;
@property (nonatomic) unsigned char purpose; // @synthesize purpose=_purpose;
@property (readonly) vector_4dc5f307 *rowUids; // @synthesize rowUids=_rowUids;

+ (BOOL)p_remapUidVector:(vector_4dc5f307 *)arg1 usingUidMap:(const UUIDMap_b66c2694 *)arg2 clearIfMissing:(BOOL)arg3;
+ (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 isRangeRef:(BOOL)arg4 purpose:(unsigned char)arg5;
+ (id)stringForPurpose:(unsigned char)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithArchive:(const struct ASTNodeArrayArchive_ASTUidTract *)arg1;
- (id)initWithColumnUid:(const UUIDData_5fbc143e *)arg1 rowUid:(const UUIDData_5fbc143e *)arg2 purpose:(unsigned char)arg3;
- (id)initWithColumnUids:(const vector_4dc5f307 *)arg1 rowUids:(const vector_4dc5f307 *)arg2 purpose:(unsigned char)arg3;
- (BOOL)remapUsingColumnUidMap:(const UUIDMap_b66c2694 *)arg1 rowUidMap:(const UUIDMap_b66c2694 *)arg2 clearIfMissing:(BOOL)arg3;
- (BOOL)remapUsingUidMap:(const UUIDMap_b66c2694 *)arg1;
- (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTract *)arg1;

@end

