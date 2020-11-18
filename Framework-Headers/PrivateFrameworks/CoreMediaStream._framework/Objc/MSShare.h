//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCoding-Protocol.h>

@class NSString;

@interface MSShare : NSObject <NSCoding>
{
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_UUID;
    int _sharingOurStream;
    int _sharingTheirStream;
}

@property (strong, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (strong, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (strong, nonatomic) NSString *fullName;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (nonatomic) int sharingOurPhotostream;
@property (nonatomic) int sharingOurStream; // @synthesize sharingOurStream=_sharingOurStream;
@property (nonatomic) int sharingTheirPhotostream;
@property (nonatomic) int sharingTheirStream; // @synthesize sharingTheirStream=_sharingTheirStream;

+ (id)share;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

