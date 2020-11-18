//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <nfshared/NSObject-Protocol.h>

@class NSData, NSString;
@protocol NFNdefRecord;

@protocol NFNdefRecord <NSObject>

@property (nonatomic) BOOL chunked;
@property (nonatomic) unsigned char header;
@property (strong, nonatomic) NSData *identifier;
@property (nonatomic) BOOL messageBegin;
@property (nonatomic) BOOL messageEnd;
@property (strong, nonatomic) NSData *payload;
@property (nonatomic) BOOL shortRecord;
@property (strong, nonatomic) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

- (NSData *)asData;
- (NSString *)decode;
- (id)initWithNDEFRecord:(id<NFNdefRecord>)arg1;
- (BOOL)isURIRecord;
@end
