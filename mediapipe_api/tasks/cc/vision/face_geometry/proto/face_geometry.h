// Copyright (c) 2023 homuler
//
// Use of this source code is governed by an MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT.

#ifndef MEDIAPIPE_API_TASKS_CC_VISION_FACE_GEOMETRY_PROTO_FACE_GEOMETRY_H_
#define MEDIAPIPE_API_TASKS_CC_VISION_FACE_GEOMETRY_PROTO_FACE_GEOMETRY_H_

#include "mediapipe/tasks/cc/vision/face_geometry/proto/face_geometry.pb.h"
#include "mediapipe_api/common.h"
#include "mediapipe_api/external/protobuf.h"
#include "mediapipe_api/framework/packet.h"

extern "C" {

MP_CAPI(MpReturnCode) mp_Packet__GetFaceGeometry(mediapipe::Packet* packet, mp_api::SerializedProto* value_out);
MP_CAPI(MpReturnCode) mp_Packet__GetFaceGeometryVector(mediapipe::Packet* packet, mp_api::StructArray<mp_api::SerializedProto>* value_out);

}  // extern "C"

#endif  // MEDIAPIPE_API_TASKS_CC_VISION_FACE_GEOMETRY_PROTO_FACE_GEOMETRY_H_
