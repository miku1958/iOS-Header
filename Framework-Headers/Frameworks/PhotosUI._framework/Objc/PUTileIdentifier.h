//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSIndexPath, NSString;

@interface PUTileIdentifier : NSObject <NSCopying>
{
    unsigned long long _hash;
    NSIndexPath *_indexPath;
    NSString *_tileKind;
    NSString *_dataSourceIdentifier;
}

@property (readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property (readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (readonly, nonatomic) NSString *tileKind; // @synthesize tileKind=_tileKind;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

