//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying>
{
    unsigned short _index;
    NSUUID *_originIdentifier;
}

@property (readonly, nonatomic) unsigned short index; // @synthesize index=_index;
@property (readonly, nonatomic) NSUUID *originIdentifier; // @synthesize originIdentifier=_originIdentifier;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

