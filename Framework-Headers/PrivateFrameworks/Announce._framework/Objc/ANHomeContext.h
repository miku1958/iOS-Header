//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ANHomeContext : NSObject <NSSecureCoding>
{
    BOOL _isEmpty;
    NSString *_homeName;
    NSArray *_zoneNames;
    NSArray *_roomNames;
}

@property (strong, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property (nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property (strong, nonatomic) NSArray *roomNames; // @synthesize roomNames=_roomNames;
@property (strong, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

