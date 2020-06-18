#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.1 (swiftlang-1100.0.270.13 clang-1100.0.33.7)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TCIAB",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC5TCIAB11CSConstants")
@interface CSConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) int8_t TCFVersion;)
+ (int8_t)TCFVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5TCIAB13ConsentString")
@interface ConsentString : NSObject
/// The current Consent String. Setting will allow replacement of the curr
@property (nonatomic, copy) NSString * _Nonnull consentString;
@property (nonatomic, copy) NSData * _Nonnull consentData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithConsentData:(NSData * _Nonnull)consentData;
- (nonnull instancetype)initWithConsentString:(NSString * _Nonnull)consentString;
@property (nonatomic, readonly) NSInteger cmpId;
@property (nonatomic, readonly) NSInteger consentScreen;
@property (nonatomic, readonly, copy) NSDate * _Nonnull consentTime;
@property (nonatomic, readonly, copy) NSString * _Nonnull consentLanguage;
@property (nonatomic, readonly, copy) NSString * _Nonnull parsedPurposesConsent;
@property (nonatomic, readonly, copy) NSString * _Nonnull parsedVendorConsent;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull purposesAllowed;
- (BOOL)purposeAllowedForPurposeId:(int8_t)purposeId SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isVendorAllowedWithVendorId:(NSInteger)vendorId SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5TCIAB20ConsentStringBuilder")
@interface ConsentStringBuilder : NSObject
@property (nonatomic, copy) NSString * _Nonnull consentString;
@property (nonatomic, copy) NSData * _Nonnull consentData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setConsentRecordCreatedOnCreated:(NSDate * _Nonnull)created;
- (void)setConsentRecordLastUpdatedWithUpdated:(NSDate * _Nonnull)updated;
- (void)setCmpIDWithID:(NSInteger)ID;
- (void)setCmpVersionWithVersion:(NSInteger)version;
- (void)setConsentScreenIDWithScreenID:(NSInteger)screenID;
- (void)setConsentLanguageWithLanguage:(NSString * _Nonnull)language;
- (void)setVendorListVersionWithVersion:(NSInteger)version;
- (void)setMaxVendorIDWithID:(NSInteger)ID;
- (void)setVendorEncodingTypeWithType:(NSInteger)type;
- (void)setAllowedPurposesWithPurposes:(NSIndexSet * _Nonnull)purposes;
- (void)setRangeEntriesWithEntries:(NSIndexSet * _Nonnull)entries;
- (void)setDefaultConsentWithDefaultConsent:(BOOL)defaultConsent;
- (void)buildData;
@end


SWIFT_CLASS("_TtC5TCIAB17CoreStringBuilder")
@interface CoreStringBuilder : NSObject
/// With creation date
/// @param consentRecordCreated Epoch deciseconds when record was created
- (void)setConsentRecordCreatedOnTimestamp:(NSDate * _Nonnull)timestamp;
/// With update date
/// @param consentRecordLastUpdated Epoch deciseconds when consent string was last updated
- (void)setConsentRecordLastUpdatedOnTimestamp:(NSDate * _Nonnull)timestamp;
/// With CMP id
/// @param cmpID Consent Manager Provider ID that last updated the consent string
- (void)setCmpIDWithID:(NSInteger)ID;
/// With CMP version
/// @param cmpVersion Consent Manager Provider version
- (void)setCmpVersionWithVersion:(NSInteger)version;
/// With consent screen ID
/// @param consentScreenID Screen number in the CMP where consent was given
- (void)setConsentScreenIDWithID:(NSInteger)ID;
/// With consent language
/// @param consentLanguage Two-letter ISO639-1 language code that CMP asked for consent in
- (void)setConsentLanguageWithLanguage:(NSString * _Nullable)language;
/// With vendor list version
/// @param vendorListVersion Version of vendor list used in most recent consent string update
- (void)setVendorListVersionWithVersion:(NSInteger)version;
/// With Version of policy used within GVL
/// @param tcfPolicyVersion Version of Version of policy used within GVL
- (void)setTcfPolicyVersionWithVersion:(NSInteger)version;
/// With isServiceSpecific
/// @param value Whether the signals encoded in self TC String were from service-specific storage (true) versus ‘global’ consensu.org shared storage (false).
- (void)setIsServiceSpecificWithValue:(NSInteger)value;
/// @param value set to 1 : CMP used non-IAB standard stacks during consent gathering
/// 0 : IAB standard stacks were used
- (void)isUsingNonStandardStacksWithValue:(NSInteger)value;
/// With default consent
/// @param optIns One bit for each Special Feature, 1 = Opted in , 0 otherwise.
- (void)setSpecialFeatureOptIntsWithIns:(NSArray<NSNumber *> * _Nonnull)ins;
/// With default consent
/// @param purposesConsent One bit for each Purpose:
/// 1 Consent
/// 0 No Consent
- (void)setPurposesConsentWithPurposes:(NSArray<NSNumber *> * _Nonnull)purposes;
/// With default consent
/// @param purposesLITransparency One bit for each Purpose:
/// 1 Consent
/// 0 No Consent
- (void)setPurposesLITransparencyWithPurposes:(NSArray<NSNumber *> * _Nonnull)purposes;
/// With default consent
/// @param purposeOneTreatment One bit for each Purpose:
/// 1 Purpose 1 was NOT disclosed at all.
/// 0 Purpose 1 was disclosed commonly as consent as expected by the Policies.
- (void)setPurposeOneTreatmentWithValue:(NSInteger)value;
/// With default consent
/// @param publisherCC The country code of the country that determines legislation of reference.
/// Commonly, self corresponds to the country in which the publisher’s business entity is established.
/// Each letter is encoded as 6 bits, a=0..z=25.
- (void)setPublisherCCWithCode:(NSString * _Nullable)code;
/// With max vendor ID
/// @param maxVendorId The maximum VendorId for which consent values are given.
- (void)setVendorConsentSectionMaxVendorIdWithMaxVendorId:(NSInteger)maxVendorId;
/// With vendor encoding type
/// @param vendorEncodingType 0=BitField 1=Range
- (void)VendorConsentSectionEncodingTypeWithVendorEncodingType:(NSInteger)vendorEncodingType;
/// With bit field entries
/// @param bitFieldEntries set of VendorIds for which the vendors have consent
- (void)setVendorConsentSectionBitFieldWithEntries:(NSArray<NSNumber *> * _Nonnull)entries;
/// With max vendor ID
/// @param maxVendorId The maximum VendorId for which consent values are given.
- (void)setVendorLegitimateInterestSectionMaxVendorIdWithMaxVendorId:(NSInteger)maxVendorId;
/// With vendor encoding type
/// @param vendorEncodingType 0=BitField 1=Range
- (void)setVendorLegitimateInterestSectionEncodingTypeWithEncodingType:(NSInteger)encodingType;
/// With bit field entries
/// @param bitFieldEntries set of VendorIds for which the vendors have consent
- (void)setVendorLegitimateInterestSectionBitFieldWithEntries:(NSArray<NSNumber *> * _Nonnull)entries;
/// Validate supplied values and build [VendorConsent] object
/// @return vendor consent bits
- (NSString * _Nonnull)buildConsentString SWIFT_WARN_UNUSED_RESULT;
- (void)writeTCData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDictionary;

SWIFT_CLASS("_TtC5TCIAB12TCCMPStorage")
@interface TCCMPStorage : NSObject
+ (void)saveConsentStringWithConsent:(NSString * _Nonnull)consent;
+ (NSString * _Nonnull)getConsentString SWIFT_WARN_UNUSED_RESULT;
+ (void)setCMPSDKID;
+ (void)setSubjectToGDPRWithPresent:(NSInteger)present;
+ (void)setCMPSDKVersionWithVersion:(NSInteger)version;
+ (void)setPolicyVersionWithVersion:(NSInteger)version;
+ (void)setPublisherCCWithCode:(NSString * _Nullable)code;
+ (void)setPurposeOneTreatementWithSpecial:(NSInteger)special;
+ (void)setNonStdStackWithNonStd:(NSInteger)nonStd;
+ (void)setVendorConsentWithConsent:(NSString * _Nonnull)consent;
+ (void)setVendorLegitimateInterestWithConsent:(NSString * _Nonnull)consent;
+ (void)setPurposeConsentWithConsent:(NSString * _Nonnull)consent;
+ (void)setPurposeLegitimateInterestWithConsent:(NSString * _Nonnull)consent;
+ (void)setSpecialFeaturesConsentWithConsent:(NSString * _Nonnull)consent;
+ (void)setCreatedDateWithDate:(NSString * _Nonnull)date;
+ (NSString * _Nonnull)getCreatedDate SWIFT_WARN_UNUSED_RESULT;
+ (void)setPublisherRestrictionsWithRestriction:(NSDictionary * _Nonnull)restriction;
+ (void)resetTCData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__i386__) && __i386__
// Generated by Apple Swift version 5.1 (swiftlang-1100.0.270.13 clang-1100.0.33.7)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TCIAB",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC5TCIAB11CSConstants")
@interface CSConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) int8_t TCFVersion;)
+ (int8_t)TCFVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5TCIAB13ConsentString")
@interface ConsentString : NSObject
/// The current Consent String. Setting will allow replacement of the curr
@property (nonatomic, copy) NSString * _Nonnull consentString;
@property (nonatomic, copy) NSData * _Nonnull consentData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithConsentData:(NSData * _Nonnull)consentData;
- (nonnull instancetype)initWithConsentString:(NSString * _Nonnull)consentString;
@property (nonatomic, readonly) NSInteger cmpId;
@property (nonatomic, readonly) NSInteger consentScreen;
@property (nonatomic, readonly, copy) NSDate * _Nonnull consentTime;
@property (nonatomic, readonly, copy) NSString * _Nonnull consentLanguage;
@property (nonatomic, readonly, copy) NSString * _Nonnull parsedPurposesConsent;
@property (nonatomic, readonly, copy) NSString * _Nonnull parsedVendorConsent;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull purposesAllowed;
- (BOOL)purposeAllowedForPurposeId:(int8_t)purposeId SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isVendorAllowedWithVendorId:(NSInteger)vendorId SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5TCIAB20ConsentStringBuilder")
@interface ConsentStringBuilder : NSObject
@property (nonatomic, copy) NSString * _Nonnull consentString;
@property (nonatomic, copy) NSData * _Nonnull consentData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setConsentRecordCreatedOnCreated:(NSDate * _Nonnull)created;
- (void)setConsentRecordLastUpdatedWithUpdated:(NSDate * _Nonnull)updated;
- (void)setCmpIDWithID:(NSInteger)ID;
- (void)setCmpVersionWithVersion:(NSInteger)version;
- (void)setConsentScreenIDWithScreenID:(NSInteger)screenID;
- (void)setConsentLanguageWithLanguage:(NSString * _Nonnull)language;
- (void)setVendorListVersionWithVersion:(NSInteger)version;
- (void)setMaxVendorIDWithID:(NSInteger)ID;
- (void)setVendorEncodingTypeWithType:(NSInteger)type;
- (void)setAllowedPurposesWithPurposes:(NSIndexSet * _Nonnull)purposes;
- (void)setRangeEntriesWithEntries:(NSIndexSet * _Nonnull)entries;
- (void)setDefaultConsentWithDefaultConsent:(BOOL)defaultConsent;
- (void)buildData;
@end


SWIFT_CLASS("_TtC5TCIAB17CoreStringBuilder")
@interface CoreStringBuilder : NSObject
/// With creation date
/// @param consentRecordCreated Epoch deciseconds when record was created
- (void)setConsentRecordCreatedOnTimestamp:(NSDate * _Nonnull)timestamp;
/// With update date
/// @param consentRecordLastUpdated Epoch deciseconds when consent string was last updated
- (void)setConsentRecordLastUpdatedOnTimestamp:(NSDate * _Nonnull)timestamp;
/// With CMP id
/// @param cmpID Consent Manager Provider ID that last updated the consent string
- (void)setCmpIDWithID:(NSInteger)ID;
/// With CMP version
/// @param cmpVersion Consent Manager Provider version
- (void)setCmpVersionWithVersion:(NSInteger)version;
/// With consent screen ID
/// @param consentScreenID Screen number in the CMP where consent was given
- (void)setConsentScreenIDWithID:(NSInteger)ID;
/// With consent language
/// @param consentLanguage Two-letter ISO639-1 language code that CMP asked for consent in
- (void)setConsentLanguageWithLanguage:(NSString * _Nullable)language;
/// With vendor list version
/// @param vendorListVersion Version of vendor list used in most recent consent string update
- (void)setVendorListVersionWithVersion:(NSInteger)version;
/// With Version of policy used within GVL
/// @param tcfPolicyVersion Version of Version of policy used within GVL
- (void)setTcfPolicyVersionWithVersion:(NSInteger)version;
/// With isServiceSpecific
/// @param value Whether the signals encoded in self TC String were from service-specific storage (true) versus ‘global’ consensu.org shared storage (false).
- (void)setIsServiceSpecificWithValue:(NSInteger)value;
/// @param value set to 1 : CMP used non-IAB standard stacks during consent gathering
/// 0 : IAB standard stacks were used
- (void)isUsingNonStandardStacksWithValue:(NSInteger)value;
/// With default consent
/// @param optIns One bit for each Special Feature, 1 = Opted in , 0 otherwise.
- (void)setSpecialFeatureOptIntsWithIns:(NSArray<NSNumber *> * _Nonnull)ins;
/// With default consent
/// @param purposesConsent One bit for each Purpose:
/// 1 Consent
/// 0 No Consent
- (void)setPurposesConsentWithPurposes:(NSArray<NSNumber *> * _Nonnull)purposes;
/// With default consent
/// @param purposesLITransparency One bit for each Purpose:
/// 1 Consent
/// 0 No Consent
- (void)setPurposesLITransparencyWithPurposes:(NSArray<NSNumber *> * _Nonnull)purposes;
/// With default consent
/// @param purposeOneTreatment One bit for each Purpose:
/// 1 Purpose 1 was NOT disclosed at all.
/// 0 Purpose 1 was disclosed commonly as consent as expected by the Policies.
- (void)setPurposeOneTreatmentWithValue:(NSInteger)value;
/// With default consent
/// @param publisherCC The country code of the country that determines legislation of reference.
/// Commonly, self corresponds to the country in which the publisher’s business entity is established.
/// Each letter is encoded as 6 bits, a=0..z=25.
- (void)setPublisherCCWithCode:(NSString * _Nullable)code;
/// With max vendor ID
/// @param maxVendorId The maximum VendorId for which consent values are given.
- (void)setVendorConsentSectionMaxVendorIdWithMaxVendorId:(NSInteger)maxVendorId;
/// With vendor encoding type
/// @param vendorEncodingType 0=BitField 1=Range
- (void)VendorConsentSectionEncodingTypeWithVendorEncodingType:(NSInteger)vendorEncodingType;
/// With bit field entries
/// @param bitFieldEntries set of VendorIds for which the vendors have consent
- (void)setVendorConsentSectionBitFieldWithEntries:(NSArray<NSNumber *> * _Nonnull)entries;
/// With max vendor ID
/// @param maxVendorId The maximum VendorId for which consent values are given.
- (void)setVendorLegitimateInterestSectionMaxVendorIdWithMaxVendorId:(NSInteger)maxVendorId;
/// With vendor encoding type
/// @param vendorEncodingType 0=BitField 1=Range
- (void)setVendorLegitimateInterestSectionEncodingTypeWithEncodingType:(NSInteger)encodingType;
/// With bit field entries
/// @param bitFieldEntries set of VendorIds for which the vendors have consent
- (void)setVendorLegitimateInterestSectionBitFieldWithEntries:(NSArray<NSNumber *> * _Nonnull)entries;
/// Validate supplied values and build [VendorConsent] object
/// @return vendor consent bits
- (NSString * _Nonnull)buildConsentString SWIFT_WARN_UNUSED_RESULT;
- (void)writeTCData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDictionary;

SWIFT_CLASS("_TtC5TCIAB12TCCMPStorage")
@interface TCCMPStorage : NSObject
+ (void)saveConsentStringWithConsent:(NSString * _Nonnull)consent;
+ (NSString * _Nonnull)getConsentString SWIFT_WARN_UNUSED_RESULT;
+ (void)setCMPSDKID;
+ (void)setSubjectToGDPRWithPresent:(NSInteger)present;
+ (void)setCMPSDKVersionWithVersion:(NSInteger)version;
+ (void)setPolicyVersionWithVersion:(NSInteger)version;
+ (void)setPublisherCCWithCode:(NSString * _Nullable)code;
+ (void)setPurposeOneTreatementWithSpecial:(NSInteger)special;
+ (void)setNonStdStackWithNonStd:(NSInteger)nonStd;
+ (void)setVendorConsentWithConsent:(NSString * _Nonnull)consent;
+ (void)setVendorLegitimateInterestWithConsent:(NSString * _Nonnull)consent;
+ (void)setPurposeConsentWithConsent:(NSString * _Nonnull)consent;
+ (void)setPurposeLegitimateInterestWithConsent:(NSString * _Nonnull)consent;
+ (void)setSpecialFeaturesConsentWithConsent:(NSString * _Nonnull)consent;
+ (void)setCreatedDateWithDate:(NSString * _Nonnull)date;
+ (NSString * _Nonnull)getCreatedDate SWIFT_WARN_UNUSED_RESULT;
+ (void)setPublisherRestrictionsWithRestriction:(NSDictionary * _Nonnull)restriction;
+ (void)resetTCData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
