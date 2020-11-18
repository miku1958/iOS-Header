//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface HMHAPMetadataService : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_svcDescription;
    NSString *_localizedDescription;
    NSString *_type;
}

@property (strong, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *svcDescription; // @synthesize svcDescription=_svcDescription;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
