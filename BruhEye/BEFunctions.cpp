#include "BEFunctions.h"

namespace BEFunctions {
	namespace BEData {
		bool Exit() {
			return true;
		}

		void Run() {

		}

		void Command(char* Command) {

		}

		void ReceivedPacket(int* Packet, int Length) {

		}

		void OnReceiveAuthTicket(int* Ticket, int TicketLength) {

		}

		void AddPeer(int* PeerGUID, int GUIDLength) {

		}

		void RemovePeer(int* PeerGUID, int GUIDLength) {

		}

		void EncryptClientPacket(int* Packet, int Length, int* EncryptedPacket, int* EncryptedLength) {

		}

		void DecryptServerPacket(int* Packet, int Length, int* DecryptedPacket, int* DecryptedLength) {

		}
	}
}