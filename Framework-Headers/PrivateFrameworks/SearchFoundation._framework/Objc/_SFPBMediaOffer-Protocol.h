//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBImage;

@protocol _SFPBMediaOffer <NSObject>

@property (strong, nonatomic) _SFPBActionItem *actionItem;
@property (strong, nonatomic) _SFPBImage *image;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (copy, nonatomic) NSString *sublabel;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

