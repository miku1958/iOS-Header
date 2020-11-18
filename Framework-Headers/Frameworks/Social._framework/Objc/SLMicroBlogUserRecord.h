//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_screen_name;
    NSString *_profile_image_url;
    UIImage *_profileImageCache;
}

@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong) UIImage *profileImageCache; // @synthesize profileImageCache=_profileImageCache;
@property (strong, nonatomic) NSString *profile_image_url; // @synthesize profile_image_url=_profile_image_url;
@property (strong, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;

+ (BOOL)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end
