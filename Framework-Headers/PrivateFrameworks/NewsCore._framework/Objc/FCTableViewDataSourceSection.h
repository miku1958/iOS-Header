//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSOrderedSet, NSString;
@protocol NSCopying><NSCoding;

@interface FCTableViewDataSourceSection : NSObject <NSCopying>
{
    NSObject<NSCopying><NSCoding> *_identifier;
    NSString *_headerTitle;
    NSOrderedSet *_rowData;
}

@property (copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (copy, nonatomic) NSObject<NSCopying><NSCoding> *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSOrderedSet *rowData; // @synthesize rowData=_rowData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 headerTitle:(id)arg2 rowData:(id)arg3;

@end
