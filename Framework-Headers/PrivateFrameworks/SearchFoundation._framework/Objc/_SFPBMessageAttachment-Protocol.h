//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBURL;

@protocol _SFPBMessageAttachment <NSObject>

@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int type;
@property (strong, nonatomic) _SFPBURL *url;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

