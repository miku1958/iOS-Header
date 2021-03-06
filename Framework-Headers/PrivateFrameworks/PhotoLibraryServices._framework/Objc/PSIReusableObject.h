//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSIReusableObject : NSObject
{
    BOOL _isPreparedForReuse;
    BOOL _isPreparingFromStatement;
    BOOL _isPreparedFromStatement;
}

@property (readonly, nonatomic) BOOL isPreparedFromStatement; // @synthesize isPreparedFromStatement=_isPreparedFromStatement;

- (void)didPrepareFromStatement:(struct sqlite3_stmt *)arg1;
- (id)init;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;

@end

