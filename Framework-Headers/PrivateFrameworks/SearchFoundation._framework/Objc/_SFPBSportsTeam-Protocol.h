//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBImage;

@protocol _SFPBSportsTeam <NSObject>

@property (copy, nonatomic) NSString *accessibilityDescription;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBImage *logo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
