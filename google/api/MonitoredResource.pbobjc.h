// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/monitored_resource.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class LabelDescriptor;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MonitoredResourceRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MonitoredResourceRoot : GPBRootObject
@end

#pragma mark - MonitoredResourceDescriptor

typedef GPB_ENUM(MonitoredResourceDescriptor_FieldNumber) {
  MonitoredResourceDescriptor_FieldNumber_Type = 1,
  MonitoredResourceDescriptor_FieldNumber_DisplayName = 2,
  MonitoredResourceDescriptor_FieldNumber_Description_p = 3,
  MonitoredResourceDescriptor_FieldNumber_LabelsArray = 4,
};

/**
 * A descriptor that describes the schema of [MonitoredResource][google.api.MonitoredResource].
 **/
@interface MonitoredResourceDescriptor : GPBMessage

/**
 * The monitored resource type. For example, the type `"cloudsql_database"`
 * represents databases in Google Cloud SQL.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

/**
 * A concise name for the monitored resource type that can be displayed in
 * user interfaces. For example, `"Google Cloud SQL Database"`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *displayName;

/**
 * A detailed description of the monitored resource type that can be used in
 * documentation.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

/**
 * A set of labels that can be used to describe instances of this monitored
 * resource type. For example, Google Cloud SQL databases can be labeled with
 * their `"database_id"` and their `"zone"`.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<LabelDescriptor*> *labelsArray;
/** The number of items in @c labelsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger labelsArray_Count;

@end

#pragma mark - MonitoredResource

typedef GPB_ENUM(MonitoredResource_FieldNumber) {
  MonitoredResource_FieldNumber_Type = 1,
  MonitoredResource_FieldNumber_Labels = 2,
};

/**
 * A monitored resource describes a resource that can be used for monitoring
 * purpose. It can also be used for logging, billing, and other purposes. Each
 * resource has a `type` and a set of `labels`. The labels contain information
 * that identifies the resource and describes attributes of it. For example,
 * you can use monitored resource to describe a normal file, where the resource
 * has `type` as `"file"`, the label `path` identifies the file, and the label
 * `size` describes the file size. The monitoring system can use a set of
 * monitored resources of files to generate file size distribution.
 **/
@interface MonitoredResource : GPBMessage

/**
 * The monitored resource type. This field must match the corresponding
 * [MonitoredResourceDescriptor.type][google.api.MonitoredResourceDescriptor.type] to this resource..  For example,
 * `"cloudsql_database"` represents Cloud SQL databases.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

/**
 * Values for some or all of the labels listed in the associated monitored
 * resource descriptor. For example, you specify a specific Cloud SQL database
 * by supplying values for both the `"database_id"` and `"zone"` labels.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, NSString*> *labels;
/** The number of items in @c labels without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger labels_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
